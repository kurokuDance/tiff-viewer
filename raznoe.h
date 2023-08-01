#include "xtiffio.h"  /* for TIFF */
 	#include "geotiffio.h" /* for GeoTIFF */
 	enum { VERSION = 0, MAJOR, MINOR };
 	void main()
 	{
     		TIFF * tif = (TIFF*)0;  /* TIFF-level descriptor */
     		GTIF * gtif = (GTIF*)0; /* GeoKey-level descriptor */
     		int versions[3];
     		int cit_length;
     		geocode_t model;    /* all key-codes are of this type */
     		char* citation;
    
         		/* Open TIFF descriptor to read GeoTIFF tags */
         		tif = XTIFFOpen(fname, "r");
     		if (!tif) goto failure;
    
         		/* Open GTIF Key parser; keys will be read at this time. */
         		gtif = GTIFNew(tif);
     		if (!gtif) goto failure;
    
         		/* Get the GeoTIFF directory info */
         		GTIFDirectoryInfo(gtif, versions, 0);
     		if (versions[MAJOR] > 1)
         		{
         			printf("this file is too new for me\n"); goto failure;
         		}
     		if (!GTIFKeyGet(gtif, GTModelTypeGeoKey, &model, 0, 1))
         		{
         			printf("Yikes! no Model Type\n") goto failure;
         		}
            geokey_t
    
         		/* ASCII keys are variable-length; compute size */
         		cit_length = GTIFKeyInfo(gtif, GTCitationGeoKey, &size, &type);
     		if (cit_length > 0)
         		{
         			citation = malloc(size * cit_length);
         			if (!citation) goto failure;
         			GTIFKeyGet(gtif, GTCitationGeoKey, citation, 0, cit_length);
         			printf("Citation:%s\n", citation);
         		}
    
         		/* Get some TIFF info on this image */
         		TIFFGetField(tif, TIFFTAG_IMAGEWIDTH, &width);
    
         		/* get rid of the key parser */
         		GTIFFree(gtif);
    
         		/* close the TIFF file descriptor */
         		XTIFFClose(tif);
    
         		exit(0);
     	failure:
     		exit(-1);
     	}
//int main() {
//    TIFF* tif = TIFFOpen("C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\file_example_TIFF_5MB.tiff", "r");
//
//    int tagCount = TIFFGetTagListCount(tif);
//    for (int i = 0; i < tagCount; i++) {
//        ttag_t tagId = TIFFGetTagListEntry(tif, i);
//        uint32 valueCount = 0;
//        TIFFGetField(tif, tagId, &valueCount, NULL);
//
//        std::cout << "Tag 0x" << std::hex << tagId << ": Type "  << ", Count " << valueCount << std::endl;
//    }
//
//    TIFFClose(tif);
//    return 0;
//}

//#include <iostream>
//#include "tiffio.h"
//
//int main()
//{
//
//    // Открытие файла на чтение
//    TIFF* tif = TIFFOpen("C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\file_example_TIFF_5MB.tiff", "r");
//    if (!tif) {
//        std::cout << "Could not open file: " << "\n";
//        return 0;
//    }
//
//    // Чтение информации о тегах
//    uint16_t num_entries = 0;
//    //TIFFGetField(tif, TIFFTAG, &num_entries);
//
//    for (int i = 0; i < 400; i++) {
//        uint32_t tag = 0, type = 0, count = 0;
//        void* data;
//
//        // Получение информации о теге
//        if (TIFFGetField(tif, i, &data))
//        {
//            if (data)
//            {
//                uint32_t d = (uint32_t)data;
//                uint8_t second_byte = (d >> 16) & 0xFF;
//                std::cout << "Second byte: " <<i << "  "  << static_cast<int>(second_byte) << std::endl;
//            }
//            
//        }
//    }
//
//    // Закрытие файла
//    TIFFClose(tif);
//    getchar();
//    return 0;
//}

//#include <fstream>
//#include <iostream>
//#include <cstdint>
//using namespace std;
//
//
//uint16_t swap_uint16(uint16_t val)
//{
//    return (val << 8) | (val >> 8);
//}
//
//uint32_t swap_uint32(uint32_t val)
//{
//    return ((val << 24) & 0xFF000000) |
//        ((val << 8) & 0x00FF0000) |
//        ((val >> 8) & 0x0000FF00) |
//        ((val >> 24) & 0x000000FF);
//}
//
//
//int main() {
//    const char* name = "C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\casablanca.tif";
//    double rational_value;
//    ifstream file("C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\casablanca.tif", ios::binary);
//    if (!file.is_open()) {
//        cerr << "Error: Cannot open file" << endl;
//        return 1;
//    }
//
//    // Read the TIFF header
//    char header[8];
//    file.read(header, 8);
//    bool is_little_endian;
//    if (header[0] == 'I' && header[1] == 'I') {
//        // Little-endian byte order
//        is_little_endian = true;
//    }
//    else if (header[0] == 'M' && header[1] == 'M') {
//        // Big-endian byte order
//        is_little_endian = false;
//    }
//    else {
//        cerr << "Error: Invalid TIFF file format" << endl;
//        return 1;
//    }
//    uint32_t ifd_offset;
//    if (is_little_endian) {
//        ifd_offset = *((uint32_t*)(header + 4));
//    }
//    else {
//        ifd_offset = swap_uint32(*((uint32_t*)(header + 4)));
//    }
//
//    // Seek to the IFD offset and read the number of directory entries
//    file.seekg(ifd_offset);
//    uint16_t num_entries;
//    file.read((char*)&num_entries, 2);
//    if (!is_little_endian) {
//        num_entries = swap_uint16(num_entries);
//    }
//
//    // Read each directory entry and parse its tag and value
//    for (int i = 0; i < num_entries; i++) {
//        uint16_t tag, type;
//        uint32_t count, value_offset;
//        file.read((char*)&tag, 2);
//        file.read((char*)&type, 2);
//        file.read((char*)&count, 4);
//        TIFF* tif = TIFFOpen("C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\casablanca.tif", "r");
//        void** a;
//        if (TIFFGetField(tif, tag, &a))
//        {
//            file.read((char*)&value_offset, 4);
//            long sdds = (long)value_offset;
//            if (!is_little_endian) {
//                tag = swap_uint16(tag);
//                type = swap_uint16(type);
//                count = swap_uint32(count);
//                value_offset = swap_uint32(value_offset);
//            }
//            string res = string();
//            switch (type)
//            {
//            case TIFF_SHORT:
//                res = to_string(value_offset);//т.к. некоторые тег, имея тип short, имеют большее значение
//                break;
//            case TIFF_LONG:
//                if (count > 1)
//                {
//                    uint32_t value;
//                    file.seekg(value_offset);
//                    file.read((char*)&value, count * sizeof(uint16_t));
//                    if (!is_little_endian) {
//                        value = swap_uint32(value);
//                    }
//                    for (int h = 0; h < count; h++)
//                    {
//                        res += to_string((long)*(a + i)) + " ";
//                    }
//                }
//                else
//                    res = to_string(value_offset);
//                break;
//            case TIFF_ASCII:
//                res = to_string((char*)a);
//                break;
//            case TIFF_RATIONAL:
//                uint32* val;
//                TIFFGetField(tif, tag, &val);
//                rational_value = (double)val[0] / (double)val[1];
//                res = to_string(rational_value);
//                break;
//            default:
//                res = "no supported type";
//                break;
//            }
//
//            cout << "Tag: " << tag << "count " << count << ", Value: " << res << endl;
//        }
//    }
//        
//
//    file.close();
//    getchar();
//    return 0;
//}#pragma once

 /*string res = string();
        TIFF* tif = TIFFOpen(name, "r");
        void** a;
        if (TIFFGetField(tif, tag, &a))
        {
            switch (type)
            {
            case TIFF_SHORT:
                if (count == 1)
                    res = to_string(value_offset);
                break;
            case TIFF_LONG:
                if (count == 1)
                    res = to_string(value_offset);
                if (count > 1)
                {
                    uint32_t value;
                    file.seekg(value_offset);
                    file.read((char*)&value, count * sizeof(uint16_t));
                    if (!is_little_endian) {
                        value = swap_uint32(value);
                    }
                    for (int h = 0; h < count; h++)
                    {
                        res += to_string((long)*(a + i)) + " ";
                    }
                }
                break;
            case TIFF_ASCII:
                res = to_string((char*)a);
                break;
            default:
                res = "no support";
                break;
            }
            cout << "Tag: " << tag << " count " << count << ", Value: " << res << endl;
        }*/
