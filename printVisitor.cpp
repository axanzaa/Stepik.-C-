/**Ваш класс должен печатать (используя std::cout) текстовое представление арифметического выражения. Т.е. для объекта класса Number он должен напечатать число, которое в нем хранится, а для объекта класса BinaryOperation он должен напечатать левый операнд, затем операцию, а затем правый операнд.

Учтите, что операции + и - имеют меньший приоритет, чем операции * и /, т. е. возможно вам придется печатать дополнительные круглые скобки, чтобы сохранить правильный порядок операций.

Классы иерархии Expression и абстрактный класс Visitor приведены в комментарии в шаблоне для удобства.

При проверке задания лишние пробелы или лишние скобки будут игнорироваться, т.е. вывод "1+2" эквивалентен выводу "( ( 1 )  +   ( 2 ) )", а вот вывод "1 + 2 * 3" не эквивалентен выводу "((1 + 2) * 3)". Вы можете попытаться минимизировать количество скобок в выводе, но это не требуется.

Перед выполнением задания внимательно прочитайте содержимое предыдущего степа.

Требования к реализации: при выполнении задания вы можете заводить любые вспомогательные классы или функции, но не нужно реализовывать функцию main или менять реализацию классов иерархии Expression.**/

#include <iostream>
struct PrintVisitor: Visitor {
 
    void visitNumber(Number const * number) {
        double x = number->evaluate();
        if(x < 0)
            std::cout << "(" << x << ")";
        else
            std::cout << x ;
    }
 
    void visitBinaryOperation(BinaryOperation const * bop) {
        bool is_prev = this->is;  //исходное
        char c = bop->get_op();
        bool is_cur = is_prev && (c == '-' || c == '+'); //снаруже * или /, а у нас + или - => нужны скобки
        if(is_cur)
            std::cout << "(";
        
        
        this->is = c=='*'||c=='/';   //сообщаем внутрь, что у нас приоритетная операция
        bop->get_left()->visit(this);
 
        std::cout << c;
        
        this->is = c=='*'||c =='/'; //сообщаем внутрь, что у нас приоритетная операция
        bop->get_right()->visit(this);
        
        if(is_cur)
            std::cout << ")";
        this->is = is_prev;      //вернем
    }
private:
    bool is=false;
};