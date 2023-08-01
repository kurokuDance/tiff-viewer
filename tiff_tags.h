
#pragma once
#define _HAS_STD_BYTE 0
#include <iostream>
#include <vector>
#include "tiffio.h";
#include <sstream>
#include <fstream>
#include <cstdint>
#include <iomanip>
#include <optional>
using namespace std;

string parsingMaxSampleValue(TIFF* tif, uint32_t value_offset, uint32_t count, string fileDirectory, int type, int tag, bool is_little_endian, int num_pages)
{
    void** a;
    string res = string();
    TIFFGetField(tif, tag, &a);
    for (int i = 0; i < stoi(getTagByCode(num_pages - 1, TIFFTAG_SAMPLESPERPIXEL).values); i++)
        res += to_string((short)a) + " ";
    return res;
}

string parsingBitsPerSample(TIFF* tif, uint32_t value_offset, uint32_t count, string fileDirectory, int type, int tag, bool is_little_endian, int num_pages)
{
    void* a;
    string res;
    TIFFGetField(tif, tag, &a);
    for (int k = 0; k < count; k++)
        res += to_string((short)(a)) + " ";
    return res;
}

string parsingSampleFormat(TIFF* tif, uint32_t value_offset, uint32_t count, string fileDirectory, int type, int tag, bool is_little_endian, int num_pages)
{
    void* a;
    string res;
    TIFFGetField(tif, tag, &a);
    for (int k = 0; k < count; k++)
        res += to_string((short)(a)) + " ";
    return res;
}

string parsingColorMap(TIFF* tif, uint32_t value_offset, uint32_t count, string fileDirectory, int type, int tag, bool is_little_endian, int num_pages)
{
    string res;
    uint16_t* red; uint16_t* green; uint16_t* blue;
    TIFFGetField(tif, tag, &red, &green, &blue);
    for (int k = 0; k < count; k++)
        res += to_string((unsigned short)*(red + k)) + " ";
    for (int k = 0; k < count; k++)
        res += to_string((unsigned short)*(green + k)) + " ";
    for (int k = 0; k < count; k++)
        res += to_string((unsigned short)*(blue + k)) + " ";
    return res;
}

string parsingGdalNoData(TIFF* tif, uint32_t value_offset, uint32_t count, string fileDirectory, int type, int tag, bool is_little_endian, int num_pages)
{
    void** a;
    string res;
    uint32_t coun;
    TIFFGetField(tif, tag, &coun, &a);
    res = to_string((char*)a);
    return res;
}

string parsingICCProfile(TIFF* tif, uint32_t value_offset, uint32_t count, string fileDirectory, int type, int tag, bool is_little_endian, int num_pages)
{
    string res;
    uint16_t* val;
    TIFFGetField(tif, tag, &count, &val);
    for (int k = 0; k < count; k++)
        res += to_string((unsigned char)*(val + k)) + " ";
    return res;
}

vector<DefinedTiffTag> allDefinedTiffTags =
{
    {254, "NewSubfileType"},
    {255, "SubfileType"},
    {256, "ImageWidth"},
    {257, "ImageLength"},
    {258, "BitsPerSample",parsingBitsPerSample},
    {259, "Compression"},
    {262, "PhotometricInterpretation"},
    {263, "Threshholding"},
    {264, "CellWidth"},
    {265, "CellLength"},
    {266, "FillOrder"},
    {270, "ImageDescription"},
    {271, "Make"},
    {272, "Model"},
    {273, "StripOffsets"},
    {274, "Orientation"},
    {277, "SamplesPerPixel"},
    {278, "RowsPerStrip"},
    {279, "StripByteCounts"},
    {280, "MinSampleValue"},
    {281, "MaxSampleValue", parsingMaxSampleValue},
    {282, "XResolution"},
    {283, "YResolution"},
    {284, "PlanarConfiguration"},
    {288, "FreeOffsets"},
    {289, "FreeByteCounts"},
    {290, "GrayResponseUnit"},
    {291, "GrayResponseCurve"},
    {296, "ResolutionUnit"},
    {305, "Software"},
    {306, "DateTime"},
    {315, "Artist"},
    {316, "HostComputer"},
    {320, "ColorMap", parsingColorMap},
    {338, "ExtraSamples"},
    {33432, "Copyright"},
    {269, "DocumentName"},
    {285, "PageName"},
    {286, "XPosition"},
    {287, "YPosition"},
    {292, "T4Options"},
    {293, "T6Options"},
    {297, "PageNumber"},
    {301, "TransferFunction"},
    {317, "Predictor"},
    {318, "WhitePoint"},
    {319, "PrimaryChromaticities"},
    {321, "HalftoneHints"},
    {322, "TileWidth"},
    {323, "TileLength"},
    {324, "TileOffsets"},
    {325, "TileByteCounts"},
    {326, "BadFaxLines"},
    {327, "CleanFaxData"},
    {328, "ConsecutiveBadFaxLines"},
    {330, "SubIFDs"},
    {332, "InkSet"},
    {333, "InkNames"},
    {334, "NumberOfInks"},
    {336, "DotRange"},
    {337, "TargetPrinter"},
    {339, "SampleFormat", parsingSampleFormat},
    {340, "SMinSampleValue"},
    {341, "SMaxSampleValue"},
    {342, "TransferRange"},
    {343, "ClipPath"},
    {344, "XClipPathUnits"},
    {345, "YClipPathUnits"},
    {346, "Indexed"},
    {347, "JPEGTables"},
    {351, "OPIProxy"},
    {400, "GlobalParametersIFD"},
    {401, "ProfileType"},
    {402, "FaxProfile"},
    {403, "CodingMethods"},
    {404, "VersionYear"},
    {405, "ModeNumber"},
    {433, "Decode"},
    {434, "DefaultImageColor"},
    {512, "JPEGProc"},
    {513, "JPEGInterchangeFormat"},
    {514, "JPEGInterchangeFormatLength"},
    {515, "JPEGRestartInterval"},
    {517, "JPEGLosslessPredictors"},
    {518, "JPEGPointTransforms"},
    {519, "JPEGQTables"},
    {520, "JPEGDCTables"},
    {521, "JPEGACTables"},
    {529, "YCbCrCoefficients"},
    {530, "YCbCrSubSampling"},
    {531, "YCbCrPositioning"},
    {532, "ReferenceBlackWhite"},
    {559, "StripRowCounts"},
    {700, "XMP"},
    {1024, "GTModelTypeGeoKey"},
    {1025, "GTRasterTypeGeoKey"},
    {1026, "GTCitationGeoKey"},
    {2048, "GeographicTypeGeoKey"},
    {2049, "GeogCitationGeoKey"},
    {2050, "GeogGeodeticDatumGeoKey"},
    {2051, "GeogPrimeMeridianGeoKey"},
    {2052, "GeogLinearUnitsGeoKey"},
    {2053, "GeogLinearUnitSizeGeoKey"},
    {2054, "GeogAngularUnitsGeoKey"},
    {2055, "GeogAngularUnitSizeGeoKey"},
    {2056, "GeogEllipsoidGeoKey"},
    {2057, "GeogSemiMajorAxisGeoKey"},
    {2058, "GeogSemiMinorAxisGeoKey"},
    {2059, "GeogInvFlatteningGeoKey"},
    {2060, "GeogAzimuthUnitsGeoKey"},
    {2061, "GeogPrimeMeridianLongGeoKey"},
    {2062, "GeogTOWGS84GeoKey"},
    {3072, "ProjectedCSTypeGeoKey"},
    {3073, "PCSCitationGeoKey"},
    {3074, "ProjectionGeoKey"},
    {3075, "ProjCoordTransGeoKey"},
    {3076, "ProjLinearUnitsGeoKey"},
    {3077, "ProjLinearUnitSizeGeoKey"},
    {3078, "ProjStdParallel1GeoKey"},
    {3079, "ProjStdParallel2GeoKey"},
    {3080, "ProjNatOriginLongGeoKey"},
    {3081, "ProjNatOriginLatGeoKey"},
    {3082, "ProjFalseEastingGeoKey"},
    {3083, "ProjFalseNorthingGeoKey"},
    {3084, "ProjFalseOriginLongGeoKey"},
    {3085, "ProjFalseOriginLatGeoKey"},
    {3086, "ProjFalseOriginEastingGeoKey"},
    {3087, "ProjFalseOriginNorthingGeoKey"},
    {3088, "ProjCenterLongGeoKey"},
    {3089, "ProjCenterLatGeoKey"},
    {3090, "ProjCenterEastingGeoKey"},
    {3091, "ProjCenterNorthingGeoKey"},
    {3092, "ProjScaleAtNatOriginGeoKey"},
    {3093, "ProjScaleAtCenterGeoKey"},
    {3094, "ProjAzimuthAngleGeoKey"},
    {3095, "ProjStraightVertPoleLongGeoKey"},
    {3096, "ProjRectifiedGridAngleGeoKey"},
    {3097, "VerticalCSTypeGeoKey"},
    {3098, "VerticalCitationGeoKey"},
    {3099, "VerticalDatumGeoKey"},
    {4096, "GeoKeyDirectoryTag"},
    {4097, "GeoDoubleParamsTag"},
    {4098, "GeoAsciiParamsTag"},
    {32781, "ImageID"},
    {33628, "MPT_NEWSWIRE"},
    {33629, "MPT_UNKNOWN"},
    {33630, "MPT_MAX_VALUE"},
    {33922, "PixelXDimension" },
    {33923, "PixelYDimension" },
    {34732, "ImageLayer" },
    {34735, "GeoKeyDirectoryTag"},
    {34736, "GeoDoubleParamsTag"},
    {34737, "GeoAsciiParamsTag"},
    {34738, "NAIP_Ortho_Bundle_Header"},
    {34739, "NAIP_Ortho_Bundle_Footer"},
    {34740, "NAIP_Ortho_CID_1"},
    {34741, "NAIP_Ortho_CID_2"},
    {34742, "NAIP_Source_Image_ID"},
    {34743, "NAIP_File_ID"},
    {34744, "NAIP_Collection_ID"},
    {34745, "NAIP_Sensor_ID"},
    {34746, "NAIP_Sensor_Name"},
    { 34765, "ICCPROFILE", parsingICCProfile },
    { 40001, "GDAL_METADATA" },
    { 40002, "GDAL_NODATA",parsingGdalNoData },
    { 40003, "GDAL_OVERVIEW_COUNT" },
    { 42112, "GDAL_METADATA" },
    { 42113, "GDAL_NO_DATA", parsingGdalNoData }
};

string defaultTagParsing(TIFF* tif, uint32_t value_offset, uint32_t count, string fileDirectory, int type, int tag, bool is_little_endian, int num_pages)
{
    string res = string();
    uint32_t value;
    void** a;
    void** b;
    void* buf;
    double rational_value;
    ifstream file(fileDirectory, ios::binary);
    streampos pos;
    switch (type)
    {
    case TIFF_SHORT:
        if (count == 1)
        {
            if (!is_little_endian)
            {
                uint16_t* buff;
                TIFFGetField(tif, tag, &buff);
                res += to_string((short)buff);
            }
            else
                res += to_string((short)value_offset);
            break;
        }
        else
            if (count * sizeof(short) <= 4)
            {
                TIFFGetField(tif, tag, &a, &b);
                res = to_string((short)a) + " " + to_string((short)(b));
                break;
            }
            else
            {
                uint16_t* val;
                TIFFGetField(tif, tag, &count, &val);
                for (int k = 0; k < count; k++)
                {
                    uint16_t* value = (val + k);
                    if (!is_little_endian)
                        TIFFSwabShort(value);
                    res += to_string((short)*(val + k)) + " ";
                }
                break;
            }
    case TIFF_LONG:
        if (count == 1)
            res = to_string((long)value_offset);
        else
        {
            TIFFGetField(tif, tag, &a);
            for (int k = 0; k < count; k++)
            {
                res += to_string((long)*(a + k * 2)) + " ";
            }
        }
        break;
    case TIFF_RATIONAL:
        if (count == 1)
        {
            uint32_t numerator;
            uint32_t denominator;
            pos = file.tellg();
            file.seekg(value_offset, std::ios::beg);
            file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
            file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
            rational_value = static_cast<double>(numerator) / static_cast<double>(denominator);
            res = to_string(rational_value);
            file.seekg(pos);
        }
        else
            if (count > 1)
            {
                uint32_t numerator;
                uint32_t denominator;
                pos = file.tellg();
                file.seekg(value_offset, std::ios::beg);
                for (int i = 0; i < count; i++)
                {
                    file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
                    file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
                    rational_value = static_cast<double>(numerator) / static_cast<double>(denominator);
                    res += to_string(rational_value) + " ";
                }
                file.seekg(pos);
            }
        break;
    case TIFF_DOUBLE:
        if (count == 1)
        {
            double val;
            TIFFGetField(tif, tag, &val);
            res = to_string(val);
        }
        else
        {
            double* val;
            TIFFGetField(tif, tag, &count, &val);
            for (int i = 0; i < count; i++)
            {
                res += to_string((double)*(val + i)) + " ";
            }

        }
        break;

    case TIFF_BYTE:
        if (count == 1)
            res = to_string(value_offset);
        else
            if (count * sizeof(unsigned char) <= 4)//byte
            {

            }
            else
            {
                uint8_t* val;
                TIFFGetField(tif, tag, &count, &val);
                for (int k = 0; k < count; k++)
                {
                    res += to_string((int)*(val + k)) + " ";
                }
            }
        break;
    case TIFF_SRATIONAL:
        if (count == 1)
        {
            uint32_t numerator;
            uint32_t denominator;
            pos = file.tellg();
            file.seekg(value_offset, std::ios::beg);
            file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
            file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
            rational_value = static_cast<double>(numerator) / static_cast<double>(denominator);
            res = to_string(rational_value);
            file.seekg(pos);
        }
        else
            if (count > 1)
            {
                uint32_t numerator;
                uint32_t denominator;
                pos = file.tellg();
                file.seekg(value_offset, std::ios::beg);
                for (int i = 0; i < count; i++)
                {
                    file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
                    file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
                    rational_value = static_cast<double>(numerator) / static_cast<double>(denominator);
                    res += to_string(rational_value) + " ";
                }
                file.seekg(pos);
            }
        break;
    case TIFF_ASCII:
        if (tag == 34737)//GeoAsciiParamsTag
        {
            file.seekg(value_offset);
            pos = file.tellg();
            string value(count, '\0');
            file.read(&value[0], count);
            res += value;
            file.seekg(pos);
            break;
        }
        TIFFGetField(tif, tag, &a);
        if (count * sizeof(char) <= 4)
            res = to_string((char)a);////neprav
        else
            res = to_string((char*)a);
        break;
    case TIFF_IFD:
        TIFFGetField(tif, tag, &a);
        res = to_string((int)a);
        break;
    case TIFF_FLOAT:
        if (count == 1)
        {
            float val;
            TIFFGetField(tif, tag, &val);
            res = to_string(val);
        }
        else
        {
            float* val;
            TIFFGetField(tif, tag, &count, &val);
            for (int i = 0; i < count; i++)
                res += to_string((float)*(val + i)) + " ";
        }
        break;
    case TIFF_UNDEFINED:
        res = "no realization of this undefined tag";
        break;
    default:
        res = "no support type";
        break;
    }
    file.close();
    return res;
}