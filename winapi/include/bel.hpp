#ifndef BELARUS
#define BELARUS

#include <windows.h>
#include <string>
#include <iostream>
#include <map>
#include <set>
#include <vector>

#define карыстаць using
#define вобласць namespace

карыстаць праблема = std::exception;
карыстаць страка = std::string;

карыстаць цэл = int;
карыстаць пуст = void;
карыстаць сімв = char;
карыстаць дроб4 = float;
карыстаць дроб8 = double;
карыстаць доўг = long;
карыстаць бяззнак = unsigned;
карыстаць логіка = bool;

карыстаць НАКНО = HWND;
карыстаць НМЕНЮ = HMENU;
карыстаць НПЭНДЗ = HBRUSH;
карыстаць БЦЭЛ = UINT;
карыстаць ЎПАРАМ = WPARAM;
карыстаць ЛПАРАМ = LPARAM;
карыстаць АКНОКЛАС = WNDCLASSA;
карыстаць ВЕСТКА = MSG;

#define малворд(l) ((WORD) (((DWORD_PTR) (l)) & 0xffff))
#define рэінт_прывядз reinterpret_cast
#define стат_прывядз static_cast
#define унікальны make_unique

#define уваход main

#define клас class
#define пералік enum
#define структ struct
#define прыравн typedef

#define публіч public
#define прыват private
#define абарон protected
#define стат static
#define канст const

#define праўда true
#define хлусня false

#define выбар switch 
#define шлях case
#define калі if
#define інакш else
#define злом break
#define працяг continue
#define пераход goto
#define спроба try
#define няўдача catch
#define ёсць throw
#define вярнуць return
#define стварыць new
#define выдаліць delete
#define пакуль while
#define для for

#define абзац std::endl

#define вывад std::cout
#define ўвод std::cin

#define адсутпаказ nullptr
#define адсут NULL
#define вектар std::vector
#define мноства std::set
#define карта std::map

#define функцыя function

#define аўта auto

#endif