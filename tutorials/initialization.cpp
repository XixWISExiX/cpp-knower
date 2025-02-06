# include <iostream>

int main(){
    [[mabye_unused]] int a;         // default-initialization (no initializer)

    // Traditional initialization forms:
    [[mabye_unused]] int b = 5;     // copy-initialization (initial value after equals sign)
    [[mabye_unused]] int c ( 6 );   // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    [[mabye_unused]] int e {};      // value-initialization (empty braces)
	std::cout<<d<<"\n";
}
