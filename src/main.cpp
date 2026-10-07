#include <print>
#include <string>
#include <vector>
#include <iostream>

#include <OpenXLSX.hpp>

using namespace OpenXLSX;


int main()
{
    
    XLDocument doc;
    std::vector<std::string> workbook;

const std::string file {"F:/OpenTest.xlsx"}; 

    doc.open(file);
    
if (!doc.isOpen())
{
   std::println("Could not open file: {}", file);
   return 1;
    
}


    auto wks = doc.workbook().worksheet("Sheet1");



std::vector< XLCellValue > vec1;    
std::vector< XLCellValue > vec2;


     // „итаем и выводим данные из €чеек
    for (int row = 1; row <= wks.rowCount(); ++row) {
        for (int col = 1; col <= wks.columnCount(); ++col) {
            // ѕолучаем значение €чейки
            OpenXLSX::XLValueType k;

            k = wks.cell(row, col).value().type();
            
             if (col == 1){
            const std::string value = wks.cell(row, col).value().get<std::string>();
            std::cout << "Cell (" << row << ", " << col << "): " << value; 
            std::cout <<"  ";
            }
            if (col == 2){
            const float value = wks.cell(row, col).value().get<float>();
            std::cout << "Cell (" << row << ", " << col << "): " << value << std::endl;
            } 

        }
    }
    
doc.close();


    return 0;
}
