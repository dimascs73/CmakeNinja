#include <print>
#include <string>

#include <OpenXLSX.hpp>

using namespace OpenXLSX;


int main()
{
    
    XLDocument doc;
    doc.create("Spreadsheet.xlsx", XLForceOverwrite);
    auto wks = doc.workbook().worksheet("Sheet1");

    wks.cell("A1").value() = "Hello, OpenXLSX!";

    doc.save();
    
    std::string name {"Dima"};
    
    std::println("Hello, {}", name);

    return 0;
}
