
#include <iostream>
#include <cstring>

int main() {
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;

    std::cout << "-- animal: " << animal << ", and bird: " << bird << std::endl; // bear, wren ???
    std::cin >> animal;
    ps = animal;
    std::cout << "-- ps: " << ps << std::endl; // the entered animal

    std::cout << "\n>> animal: " << animal << ", (int *) animal: " << (int *) animal << std::endl;
    std::cout << ">> ps: " << ps << ", (int *) ps: " << (int *) ps << std::endl;
    ps = new char[strlen(animal) + 1]; //
    strcpy(ps, animal); //
    std::cout << "--> after strcpy: " << std::endl;
    std::cout << ">> animal: " << animal << ", (int *) animal: " << (int *) animal << std::endl;
    std::cout << ">> ps: " << ps << ", (int *) ps: " << (int *) ps << std::endl;

    std::cout << "-------------------------------------" << std::endl;
    char str1[20] = "abcde";
    char str2[] = "fghij";
    strcat_s(str1, str2);

    if (strcmp(str1, "abcdefghij") == 0)
        std::cout << "str1 and 'abcdefghij' are identical." << std::endl;
    if (strcmp("123456", str1) != 0)
        std::cout << "'123456' and str1 are NOT identical." << std::endl;

    return 0;
}
