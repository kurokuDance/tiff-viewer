//#pragma once
//#pragma once
//#define _HAS_STD_BYTE 0
//#include <iostream>
//#include <vector>
//#include "tiffio.h";
//#include <sstream>
//#include <fstream>
//#include <cstdint>
//#include <iomanip>
//#include <optional>
//using namespace std;
//
//template <class T>
//inline std::string to_string(const T& t)
//{
//    std::stringstream ss;
//    ss << t;
//    return ss.str();
//}
//
//struct TiffTag
//{
//public:
//    int code;
//    string name;
//    string type;
//    int count;
//    //vector<string> values;
//    string values;
//
//    TiffTag() {};
//
//    TiffTag(int code, string name, string type, int count, string values)
//    {
//        this->code = code; this->name = name, this->type = type; this->count = count; this->values = values;
//    }
//};
//
//class TiffTagsVieawer
//{
//public:
//    vector<vector<TiffTag>> TiffTagsInFile;
//    ifstream file;
//    char* fileDirectory;
//    int num_pages;
//
//
//    TiffTagsVieawer(char* name)
//    {
//        if (TIFFOpen(name, "r"))
//            this->fileDirectory = name;
//    }
//
//    uint16_t swap_uint16(uint16_t val)
//    {
//        return (val << 8) | (val >> 8);
//    }
//
//    uint32_t swap_uint32(uint32_t val)
//    {
//        return ((val << 24) & 0xFF000000) |
//            ((val << 8) & 0x00FF0000) |
//            ((val >> 8) & 0x0000FF00) |
//            ((val >> 24) & 0x000000FF);
//    }
//
//    string getTypeName(int type)
//    {
//        switch (type)
//        {
//        case 1:
//            return "BYTE";
//        case 2:
//            return "ASCII";
//        case 3:
//            return "SHORT";
//        case 4:
//            return "LONG";
//        case 5:
//            return "RATIONAL";
//        case 6:
//            return "SBYTE";
//        case 7:
//            return "UNDEFINED";
//        case 10:
//            return "SRATIONAL";
//        case 11:
//            return "FLOAT";
//        case 12:
//            return "DOUBLE";
//        case 13:
//            return "IFD";
//        default:
//            return "???";
//        }
//    }
//
//    string getTagName(int tag)
//    {
//        //baseline
//        switch (tag)
//        {
//        case 254: return "NewSubfileType";
//        case 255: return "SubfileType";
//        case 256: return "ImageWidth";
//        case 257: return "ImageLength";
//        case 258: return "BitsPerSample";
//        case 259: return "Compression";
//        case 262: return "PhotometricInterpretation";
//        case 263: return "Threshholding";
//        case 264: return "CellWidth";
//        case 265: return "CellLength";
//        case 266: return "FillOrder";
//        case 270: return "ImageDescription";
//        case 271: return "Make";
//        case 272: return "Model";
//        case 273: return "StripOffsets";
//        case 274: return "Orientation";
//        case 277: return "SamplesPerPixel";
//        case 278: return "RowsPerStrip";
//        case 279: return "StripByteCounts";
//        case 280: return "MinSampleValue";
//        case 281: return "MaxSampleValue";
//        case 282: return "XResolution";
//        case 283: return "YResolution";
//        case 284: return "PlanarConfiguration";
//        case 288: return "FreeOffsets";
//        case 289: return "FreeByteCounts";
//        case 290: return "GrayResponseUnit";
//        case 291: return "GrayResponseCurve";
//        case 296: return "ResolutionUnit";
//        case 305: return "Software";
//        case 306: return "DateTime";
//        case 315: return "Artist";
//        case 316: return "HostComputer";
//        case 320: return "ColorMap";
//        case 338: return "ExtraSamples";
//        case 33432: return "Copyright";
//        }
//
//        //Extension
//        switch (tag)
//        {
//        case 269: return "DocumentName";
//        case 285: return "PageName";
//        case 286: return "XPosition";
//        case 287: return "YPosition";
//        case 292: return "T4Options";
//        case 293: return "T6Options";
//        case 297: return "PageNumber";
//        case 301: return "TransferFunction";
//        case 317: return "Predictor";
//        case 318: return "WhitePoint";
//        case 319: return "PrimaryChromaticities";
//        case 321: return "HalftoneHints";
//        case 322: return "TileWidth";
//        case 323: return "TileLength";
//        case 324: return "TileOffsets";
//        case 325: return "TileByteCounts";
//        case 326: return "BadFaxLines";
//        case 327: return "CleanFaxData";
//        case 328: return "ConsecutiveBadFaxLines";
//        case 330: return "SubIFDs";
//        case 332: return "InkSet";
//        case 333: return "InkNames";
//        case 334: return "NumberOfInks";
//        case 336: return "DotRange";
//        case 337: return "TargetPrinter";
//        case 339: return "SampleFormat";
//        case 340: return "SMinSampleValue";
//        case 341: return "SMaxSampleValue";
//        case 342: return "TransferRange";
//        case 343: return "ClipPath";
//        case 344: return "XClipPathUnits";
//        case 345: return "YClipPathUnits";
//        case 346: return "Indexed";
//        case 347: return "JPEGTables";
//        case 351: return "OPIProxy";
//        case 400: return "GlobalParametersIFD";
//        case 401: return "ProfileType";
//        case 402: return "FaxProfile";
//        case 403: return "CodingMethods";
//        case 404: return "VersionYear";
//        case 405: return "ModeNumber";
//        case 433: return "Decode";
//        case 434: return "DefaultImageColor";
//        case 512: return "JPEGProc";
//        case 513: return "JPEGInterchangeFormat";
//        case 514: return "JPEGInterchangeFormatLength";
//        case 515: return "JPEGRestartInterval";
//        case 517: return "JPEGLosslessPredictors";
//        case 518: return "JPEGPointTransforms";
//        case 519: return "JPEGQTables";
//        case 520: return "JPEGDCTables";
//        case 521: return "JPEGACTables";
//        case 529: return "YCbCrCoefficients";
//        case 530: return "YCbCrSubSampling";
//        case 531: return "YCbCrPositioning";
//        case 532: return "ReferenceBlackWhite";
//        case 559: return "StripRowCounts";
//        case 700: return "XMP";
//        case 32781: return "ImageID";
//        case 34732: return "ImageLayer";
//        default: return "no name";
//        }
//
//        //private
//        switch (tag)
//        {
//        default:
//            break;
//        }
//    }
//
//    //TiffTag(int code, string name, string type, int count, string values)
//    TiffTag createTag(int tag, int type, int count, string res)
//    {
//        TiffTag tempTag(tag, getTagName(tag), getTypeName(type), count, res);
//        return tempTag;
//    }
//
//    TiffTag getTagByCode(int page, int code)
//    {
//        for (auto x : TiffTagsInFile[page])
//            if (x.code == code)
//                return x;
//    }
//
//    void outputTags()
//    {
//        cout << "tag   name        type   count   values" << endl;
//        for (int i = 0; i < TiffTagsInFile.size(); i++)
//        {
//            cout << "page: " << i + 1 << " num entr = " << TiffTagsInFile[i].size() << endl;
//            for (int j = 0; j < TiffTagsInFile[i].size(); j++)
//            {
//                cout << TiffTagsInFile[i][j].code << " " << TiffTagsInFile[i][j].name << " "
//                    << TiffTagsInFile[i][j].type << " " << TiffTagsInFile[i][j].count << "\t" <<
//                    TiffTagsInFile[i][j].values << endl;
//            }
//            cout << endl << endl;
//        }
//
//    }
//
//    void fillTagVecFromFile()
//    {
//        TIFF* tif = TIFFOpen(fileDirectory, "r"); // открываем Tiff файл для чтения
//        ifstream file(fileDirectory, ios::binary);
//        if (!tif) {
//            // обработка ошибки, если не удалось открыть файл
//        }
//        char header[8];
//        file.read(header, 8);
//        bool is_little_endian;
//        if (header[0] == 'I' && header[1] == 'I') {
//            // Little-endian byte order
//            is_little_endian = true;
//        }
//        else if (header[0] == 'M' && header[1] == 'M') {
//            // Big-endian byte order
//            is_little_endian = false;
//        }
//        else {
//            cerr << "Error: Invalid TIFF file format" << endl;
//        }
//        file.seekg(0);
//        num_pages = 0;
//        do {
//            TiffTagsInFile.push_back(vector<TiffTag>());
//            num_pages++;
//            cout << TIFFCurrentDirectory(tif) + 1 << " " << (unsigned long long)TIFFCurrentDirOffset(tif);
//            unsigned long long ifd_offset = (unsigned long long)TIFFCurrentDirOffset(tif);
//            file.seekg(ifd_offset);
//            uint16_t num_entries;
//            file.read((char*)&num_entries, 2);
//            if (!is_little_endian)
//            {
//                num_entries = swap_uint16(num_entries);
//            }
//            cout << endl << " num entr = " << num_entries << endl;
//            for (int i = 0; i < num_entries; i++) {
//                bool flag = true;
//                uint16_t tag, type;
//                uint32_t count, value_offset;
//                file.read((char*)&tag, 2);
//                file.read((char*)&type, 2);
//                file.read((char*)&count, 4);
//                file.read((char*)&value_offset, 4);
//                if (!is_little_endian)
//                {
//                    tag = swap_uint16(tag);
//                    type = swap_uint16(type);
//                    count = swap_uint32(count);
//                    value_offset = swap_uint32(value_offset);
//                }
//                uint32_t value;
//                void** a;
//                void** b;
//                void* buf;
//                double rational_value;
//                streampos pos;
//                string res = string();
//                int sa = sizeof(short);
//                switch (type)
//                {
//                case TIFF_SHORT:
//                    if (count == 1)
//                    {
//                        if (!is_little_endian)
//                        {
//                            uint16_t* buff;
//                            TIFFGetField(tif, tag, &buff);
//                            res += to_string((short)buff);
//                        }
//                        else
//                            res += to_string((short)value_offset);
//                        break;
//                    }
//                    else
//                        if (count * sizeof(short) <= 4)
//                        {
//                            TIFFGetField(tif, tag, &a, &b);
//                            res = to_string((short)a) + " " + to_string((short)(b));
//                            break;
//                        }
//                        else
//                        {
//                            if (tag == TIFFTAG_BITSPERSAMPLE || tag == TIFFTAG_SAMPLEFORMAT)
//                            {
//                                TIFFGetField(tif, tag, &a);
//                                for (int k = 0; k < count; k++)
//                                {
//                                    res += to_string((short)(a)) + " ";
//                                }
//                                break;
//                            }
//                            if (tag == TIFFTAG_MAXSAMPLEVALUE)
//                            {
//                                TIFFGetField(tif, tag, &a);
//                                for (int i = 0; i < stoi(getTagByCode(num_pages - 1, TIFFTAG_SAMPLESPERPIXEL).values); i++)
//                                    res += to_string((short)a) + " ";
//                                break;
//                            }
//                            if (tag == TIFFTAG_COLORMAP)
//                            {
//                                uint16_t* red; uint16_t* green; uint16_t* blue;
//                                TIFFGetField(tif, tag, &red, &green, &blue);
//                                for (int k = 0; k < count; k++)
//                                    res += to_string((unsigned short)*(red + k)) + " ";
//                                for (int k = 0; k < count; k++)
//                                    res += to_string((unsigned short)*(green + k)) + " ";
//                                for (int k = 0; k < count; k++)
//                                    res += to_string((unsigned short)*(blue + k)) + " ";
//                                break;
//                            }
//                            uint16_t* val;
//                            TIFFGetField(tif, tag, &count, &val);
//                            for (int k = 0; k < count; k++)
//                            {
//                                uint16_t* value = (val + k);
//                                if (!is_little_endian)
//                                    TIFFSwabShort(value);
//                                res += to_string((short)*(val + k)) + " ";
//                            }
//                            break;
//                            /*else if (tag == TIFFTAG_COLORMAP)
//                            {
//                                uint16_t* val;
//                                int bitsPerSample = stoi(getTagByCode(num_pages - 1, TIFFTAG_BITSPERSAMPLE).values);
//                                int cmap_size = 3 * (bitsPerSample);
//                                TIFFGetField(tif, tag, &val);
//                                for (int i = 0; i < cmap_size; i++)
//                                {
//                                    uint16_t* value = (val + i);
//                                    if (!is_little_endian)
//                                        TIFFSwabShort(value);
//                                    res += to_string((short)*value) + " ";
//                                }
//                            }*/
//                            //short* values;
//                            /*short val[100];
//                            for (int k = 0; k < 100; k++)
//                                val[k] = 0;*/
//
//
//
//
//
//                                /*TIFFGetFieldDefaulted(tif, tag, &a);
//                                short val[28];
//                                for (int l = 0; l < count; l++)
//                                    val[l] = 0;
//                                for (int l = 0; l < count; l++)
//                                {
//                                    val[l] = (short)a;
//                                }
//                                for (int k = 0; k < count; k++)
//                                {
//                                    res += to_string(*(a + k)) + " ";
//                                }*/
//                        }
//                case TIFF_LONG:
//                    if (count == 1)
//                        res = to_string((long)value_offset);
//                    /* if(*a != nullptr)
//                         res = to_string((long)*a);
//                     else res = to_string((long)a);*/
//                    else
//                    {
//                        TIFFGetField(tif, tag, &a);
//                        for (int k = 0; k < count; k++)
//                        {
//                            res += to_string((long)*(a + k * 2)) + " ";
//                        }
//                    }
//                    break;
//                case TIFF_RATIONAL:
//                    if (count == 1)
//                    {
//                        uint32_t numerator;
//                        uint32_t denominator;
//                        pos = file.tellg();
//                        file.seekg(value_offset, std::ios::beg);
//                        file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
//                        file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
//                        rational_value = static_cast<double>(numerator) / static_cast<double>(denominator);
//                        res = to_string(rational_value);
//                        file.seekg(pos);
//                    }
//                    else
//                        if (count > 1)
//                        {
//                            uint32_t numerator;
//                            uint32_t denominator;
//                            pos = file.tellg();
//                            file.seekg(value_offset, std::ios::beg);
//                            for (int i = 0; i < count; i++)
//                            {
//                                file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
//                                file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
//                                rational_value = static_cast<double>(numerator) / static_cast<double>(denominator);
//                                res += to_string(rational_value) + " ";
//                            }
//                            file.seekg(pos);
//                        }
//                    break;
//                case TIFF_DOUBLE:
//                    if (count == 1)
//                    {
//                        double val;
//                        TIFFGetField(tif, tag, &val);
//                        res = to_string(val);
//                    }
//                    else
//                    {
//                        double* val;
//                        TIFFGetField(tif, tag, &count, &val);
//                        for (int i = 0; i < count; i++)
//                        {
//                            res += to_string((double)*(val + i)) + " ";
//                        }
//
//                    }
//                    break;
//
//                case TIFF_BYTE:
//                    if (count == 1)
//                        res = to_string(value_offset);
//                    else
//                        if (count * sizeof(unsigned char) <= 4)//byte
//                        {
//
//                        }
//                        else
//                        {
//                            uint8_t* val;
//                            TIFFGetField(tif, tag, &count, &val);
//                            for (int k = 0; k < count; k++)
//                            {
//                                res += to_string((int)*(val + k)) + " ";
//                            }
//                        }
//                    break;
//                case TIFF_SRATIONAL:
//                    if (count == 1)
//                    {
//                        uint32_t numerator;
//                        uint32_t denominator;
//                        pos = file.tellg();
//                        file.seekg(value_offset, std::ios::beg);
//                        file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
//                        file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
//                        rational_value = static_cast<double>(numerator) / static_cast<double>(denominator);
//                        res = to_string(rational_value);
//                        file.seekg(pos);
//                    }
//                    else
//                        if (count > 1)
//                        {
//                            uint32_t numerator;
//                            uint32_t denominator;
//                            pos = file.tellg();
//                            file.seekg(value_offset, std::ios::beg);
//                            for (int i = 0; i < count; i++)
//                            {
//                                file.read(reinterpret_cast<char*>(&numerator), sizeof(numerator));
//                                file.read(reinterpret_cast<char*>(&denominator), sizeof(denominator));
//                                rational_value = static_cast<double>(numerator) / static_cast<double>(denominator);
//                                res += to_string(rational_value) + " ";
//                            }
//                            file.seekg(pos);
//                        }
//                    break;
//                case TIFF_ASCII:
//                    if (tag == 34737)//GeoAsciiParamsTag
//                    {
//                        file.seekg(value_offset);
//                        pos = file.tellg();
//                        string value(count, '\0');
//                        file.read(&value[0], count);
//                        res += value;
//                        file.seekg(pos);
//                        break;
//                    }
//                    if (tag == TIFFTAG_GDAL_NODATA)
//                    {
//                        uint32_t count;
//                        TIFFGetField(tif, tag, &count, &a);
//                        res = to_string((char*)a);
//                        break;
//                    }
//                    //optional<void**> b;
//                    TIFFGetField(tif, tag, &a);
//                    if (count * sizeof(char) <= 4)
//                        res = to_string((char)a);////neprav
//                    else
//                        res = to_string((char*)a);
//                    break;
//                case TIFF_IFD:
//                    TIFFGetField(tif, tag, &a);
//                    res = to_string((int)a);
//                    break;
//                case TIFF_FLOAT:
//                    if (count == 1)
//                    {
//                        float val;
//                        TIFFGetField(tif, tag, &val);
//                        res = to_string(val);
//                    }
//                    else
//                    {
//                        float* val;
//                        TIFFGetField(tif, tag, &count, &val);
//                        for (int i = 0; i < count; i++)
//                            res += to_string((float)*(val + i)) + " ";
//                    }
//                    break;
//                case TIFF_UNDEFINED:
//                    if (tag == TIFFTAG_ICCPROFILE)
//                    {
//                        uint16_t* val;
//                        TIFFGetField(tif, tag, &count, &val);
//                        for (int k = 0; k < count; k++)
//                            res += to_string((unsigned char)*(val + k)) + " ";
//                        break;
//                    }
//
//                    break;
//                default:
//                    res = "no support type";
//                    break;
//                }
//                TiffTagsInFile[num_pages - 1].push_back({ createTag(tag, type, count, res) });
//            }
//
//        } while (TIFFReadDirectory(tif)); // переход к следующей странице, если она есть
//
//        //uint32_t ifd_offset;
//        //if (is_little_endian) {
//        //    ifd_offset = *((uint32_t*)(header + 4));
//        //}
//        //else {
//        //    ifd_offset = swap_uint32(*((uint32_t*)(header + 4)));
//        //}
//        //// Seek to the IFD offset and read the number of directory entries
//        //file.seekg(ifd_offset);
//        //uint16_t num_entries;
//        //file.read((char*)&num_entries, 2);
//        //if (!is_little_endian) {
//        //    num_entries = swap_uint16(num_entries);
//        //}
//        //// Read each directory entry and parse its tag and value
//        //for (int i = 0; i < num_entries; i++) {
//        //    bool flag = true;
//        //    uint16_t tag, type;
//        //    uint32_t count, value_offset;
//        //    file.read((char*)&tag, 2);
//        //    file.read((char*)&type, 2);
//        //    file.read((char*)&count, 4);
//        //    file.read((char*)&value_offset, 4);
//        //    if (!is_little_endian) {
//        //        tag = swap_uint16(tag);
//        //        type = swap_uint16(type);
//        //        count = swap_uint32(count);
//        //        value_offset = swap_uint32(value_offset);
//        //    }
//        //    TiffTagsInFile.push_back(createTag(tag, type, count, conversionDataInTag(type, tif, tag, count, value_offset)));
//        //}
//
//        file.close();
//    }
//
//
//};
