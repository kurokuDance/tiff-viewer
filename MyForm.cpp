#define _HAS_STD_BYTE 0

#include "MyForm.h"

#include <Windows.h>
#include "Header.h"
#include "GeoTiffForm.h"
#include "formaTemp.h"


using namespace tiffviewer;
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    TempForm^ form = gcnew TempForm;
    Application::Run(form);
    string name = form->getFilePath();

    /*AllocConsole();
    HWND consoleWindow = GetConsoleWindow();

    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
    freopen("CONIN$", "r", stdin);
    SetWindowText(consoleWindow, L"Консоль");

    TiffTagsVieawer tif(name.data());
 	tif.fillTagVecFromFile();
 	tif.outputTags();
 	getchar();*/

    return 0;
}

//int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    Application::Run(gcnew MyForm);
//
//    AllocConsole();
//    HWND consoleWindow = GetConsoleWindow();
//
//    freopen("CONOUT$", "w", stdout);
//    freopen("CONOUT$", "w", stderr);
//    freopen("CONIN$", "r", stdin);
//    SetWindowText(consoleWindow, L"Консоль");
//    cout << "adsfdsf";
//    system("pause");
//
//    return 0;
//}

//int main(int argc, char* argv[])
//{
//	char* name;
//	if (argc == 2)
//		name = argv[1];
//	else
//		name = "C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\tiff\\2.903-96.tif";
//	TiffTagsVieawer tif(name);
//	tif.fillTagVecFromFile();
//	tif.outputTags();
//	getchar();
//}

//#include <tiffio.h>
//
//int main() {
//    TIFF* tiff = TIFFOpen("C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\tiff\\2.903-96.tif", "r"); // открываем Tiff файл для чтения
//    ifstream file("C:\\Users\\Pavel\\Desktop\\bmp_workBLT_and1CH\\img\\tiff\\2.903-96.tif", ios::binary);
//    if (!tiff) {
//        // обработка ошибки, если не удалось открыть файл
//        return 1;
//    }
//
//    do {
//        cout << TIFFCurrentDirectory(tiff) + 1 << " " << (unsigned long long)TIFFCurrentDirOffset(tiff);
//        unsigned long long ifd_offset = (unsigned long long)TIFFCurrentDirOffset(tiff);
//        file.seekg(ifd_offset);
//        uint16_t num_entries;
//        file.read((char*)&num_entries, 2);
//        cout << endl << " num entr = " << num_entries << endl;
//       /* if (!is_little_endian) {
//            num_entries = swap_uint16(num_entries);
//        }*/
//        for (int i = 0; i < num_entries; i++) {
//            bool flag = true;
//            uint16_t tag, type;
//            uint32_t count, value_offset;
//            file.read((char*)&tag, 2);
//            file.read((char*)&type, 2);
//            file.read((char*)&count, 4);
//            file.read((char*)&value_offset, 4);
//            cout << tag << " " << type << " " << count << " " << value_offset << endl;
//        }
//
//    } while (TIFFReadDirectory(tiff)); // переход к следующей странице, если она есть
//
//    TIFFClose(tiff); // закрываем Tiff файл
//    getchar();
//    return 0;
//}
