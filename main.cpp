#include <iostream>
#include <algorithm>

std::string reverse_chars( std::string string ) {
    std::vector<char> data( string.begin(), string.end() );
    char temp[ string.length() ];

    for( int i = 0; i < string.length(); i++ ) {
        temp[ i ] = data[ string.length() - 1 - i ];
    }

    std::string value = temp;
    return value;
}

std::string reverse_string( std::string string ) {
    std::reverse( string.begin(), string.end() );
    return string;
}

int main() {
    std::string hello_world = "Hello, World!";
    std::cout << hello_world << std::endl;
    std::cout << reverse_string( hello_world ) << std::endl;
    std::cout << reverse_chars( hello_world ) << std::endl;
    return 0;
}