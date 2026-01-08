/*
    DATA TYPES IN C++
    =================

    Data types define the type of data a variable can hold.
    They determine the size of memory allocated and the operations that can be performed.
*/

#include <iostream>
#include <climits> // For INT_MAX, INT_MIN, etc.
#include <cfloat>  // For FLT_MAX, DBL_MAX, etc.
using namespace std;

int main()
{

    cout << "========== BASIC DATA TYPES IN C++ ==========" << endl
         << endl;

    // =====================================================
    // 1. INTEGER TYPES (int)
    // =====================================================
    /*
        Definition: Stores whole numbers (positive, negative, or zero)
        Size: Typically 4 bytes (32 bits)
        Range: -2,147,483,648 to 2,147,483,647
    */
    int age = 25;
    int temperature = -10;
    cout << "1. INTEGER (int)" << endl;
    cout << "   Size: " << sizeof(int) << " bytes" << endl;
    cout << "   Example: age = " << age << ", temperature = " << temperature << endl;
    cout << "   Range: " << INT_MIN << " to " << INT_MAX << endl
         << endl;

    // =====================================================
    // 2. SHORT INTEGER (short)
    // =====================================================
    /*
        Definition: Smaller integer type for saving memory
        Size: Typically 2 bytes (16 bits)
        Range: -32,768 to 32,767
    */
    short smallNum = 100;
    cout << "2. SHORT INTEGER (short)" << endl;
    cout << "   Size: " << sizeof(short) << " bytes" << endl;
    cout << "   Example: smallNum = " << smallNum << endl;
    cout << "   Range: " << SHRT_MIN << " to " << SHRT_MAX << endl
         << endl;

    // =====================================================
    // 3. LONG INTEGER (long)
    // =====================================================
    /*
        Definition: Larger integer type for bigger numbers
        Size: Typically 4 or 8 bytes
    */
    long bigNum = 1000000L;
    cout << "3. LONG INTEGER (long)" << endl;
    cout << "   Size: " << sizeof(long) << " bytes" << endl;
    cout << "   Example: bigNum = " << bigNum << endl;
    cout << "   Range: " << LONG_MIN << " to " << LONG_MAX << endl
         << endl;

    // =====================================================
    // 4. LONG LONG INTEGER (long long)
    // =====================================================
    /*
        Definition: Very large integer type
        Size: 8 bytes (64 bits)
    */
    long long veryBigNum = 9000000000000LL;
    cout << "4. LONG LONG INTEGER (long long)" << endl;
    cout << "   Size: " << sizeof(long long) << " bytes" << endl;
    cout << "   Example: veryBigNum = " << veryBigNum << endl;
    cout << "   Range: " << LLONG_MIN << " to " << LLONG_MAX << endl
         << endl;

    // =====================================================
    // 5. UNSIGNED INTEGERS
    // =====================================================
    /*
        Definition: Only positive whole numbers (no negative)
        Benefit: Double the positive range
    */
    unsigned int positiveOnly = 4000000000U;
    cout << "5. UNSIGNED INTEGER (unsigned int)" << endl;
    cout << "   Size: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "   Example: positiveOnly = " << positiveOnly << endl;
    cout << "   Range: 0 to " << UINT_MAX << endl
         << endl;

    // =====================================================
    // 6. FLOATING POINT (float)
    // =====================================================
    /*
        Definition: Stores decimal numbers (single precision)
        Size: 4 bytes
        Precision: ~6-7 decimal digits
    */
    float pi = 3.14159f;
    float price = 99.99f;
    cout << "6. FLOAT (float)" << endl;
    cout << "   Size: " << sizeof(float) << " bytes" << endl;
    cout << "   Example: pi = " << pi << ", price = " << price << endl;
    cout << "   Precision: ~6-7 decimal digits" << endl
         << endl;

    // =====================================================
    // 7. DOUBLE (double)
    // =====================================================
    /*
        Definition: Stores decimal numbers (double precision)
        Size: 8 bytes
        Precision: ~15-16 decimal digits
        Note: Default for decimal literals in C++
    */
    double preciseValue = 3.141592653589793;
    cout << "7. DOUBLE (double)" << endl;
    cout << "   Size: " << sizeof(double) << " bytes" << endl;
    cout << "   Example: preciseValue = " << preciseValue << endl;
    cout << "   Precision: ~15-16 decimal digits" << endl
         << endl;

    // =====================================================
    // 8. LONG DOUBLE (long double)
    // =====================================================
    /*
        Definition: Extended precision floating point
        Size: 8, 12, or 16 bytes (platform dependent)
    */
    long double veryPrecise = 3.14159265358979323846L;
    cout << "8. LONG DOUBLE (long double)" << endl;
    cout << "   Size: " << sizeof(long double) << " bytes" << endl;
    cout << "   Example: veryPrecise = " << veryPrecise << endl
         << endl;

    // =====================================================
    // 9. CHARACTER (char)
    // =====================================================
    /*
        Definition: Stores a single character or small integer
        Size: 1 byte
        Range: -128 to 127 (signed) or 0 to 255 (unsigned)
        Note: Characters are stored as ASCII values
    */
    char letter = 'A';
    char digit = '5';
    char symbol = '@';
    cout << "9. CHARACTER (char)" << endl;
    cout << "   Size: " << sizeof(char) << " byte" << endl;
    cout << "   Examples: letter = " << letter << ", digit = " << digit << ", symbol = " << symbol << endl;
    cout << "   ASCII value of 'A': " << (int)letter << endl
         << endl;

    // =====================================================
    // 10. BOOLEAN (bool)
    // =====================================================
    /*
        Definition: Stores true or false values
        Size: 1 byte
        Values: true (1) or false (0)
        Use: Conditional logic, flags
    */
    bool isStudent = true;
    bool hasLicense = false;
    cout << "10. BOOLEAN (bool)" << endl;
    cout << "    Size: " << sizeof(bool) << " byte" << endl;
    cout << "    Examples: isStudent = " << isStudent << " (true), hasLicense = " << hasLicense << " (false)" << endl
         << endl;

    // =====================================================
    // 11. VOID
    // =====================================================
    /*
        Definition: Represents absence of type
        Use Cases:
        - Function that returns nothing: void functionName()
        - Generic pointers: void* ptr
        Cannot declare a variable of type void
    */
    cout << " 11. VOID (void)" << endl;
    cout << "    Cannot store data directly" << endl;
    cout << "    Used for functions with no return value" << endl
         << endl;

    // =====================================================
    // SIZE SUMMARY TABLE
    // =====================================================
    cout << "========== SIZE SUMMARY ==========" << endl;
    cout << "| Data Type      | Size (bytes) |" << endl;
    cout << "|----------------|--------------|" << endl;
    cout << "| bool           | " << sizeof(bool) << "            |" << endl;
    cout << "| char           | " << sizeof(char) << "            |" << endl;
    cout << "| short          | " << sizeof(short) << "            |" << endl;
    cout << "| int            | " << sizeof(int) << "            |" << endl;
    cout << "| long           | " << sizeof(long) << "            |" << endl;
    cout << "| long long      | " << sizeof(long long) << "            |" << endl;
    cout << "| float          | " << sizeof(float) << "            |" << endl;
    cout << "| double         | " << sizeof(double) << "            |" << endl;
    cout << "| long double    | " << sizeof(long double) << "           |" << endl;
    cout << "==================================" << endl;

    return 0;
}

/*
    KEY POINTS TO REMEMBER:
    =======================

    1. Choose the right data type based on:
       - Range of values needed
       - Memory constraints
       - Precision requirements

    2. Use 'unsigned' when you only need positive numbers

    3. For decimal numbers:
       - Use 'float' for less precision, less memory
       - Use 'double' for more precision (recommended default)

    4. 'char' can be used both for characters and small integers

    5. 'bool' is essential for conditional logic

    6. sizeof() operator tells you the size in bytes

    TYPE MODIFIERS:
    ===============
    - signed   : Can hold negative values (default for int, char)
    - unsigned : Only positive values (0 and above)
    - short    : Reduces size
    - long     : Increases size
*/
