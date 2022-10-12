

#include <iostream>

void count_chars_with_letter(char text[], char letterToSearchFor) {
    int counter = 0;
    for (char *letter = &text[0]; *letter; letter = letter + 1) {
        if (tolower(*letter) == letterToSearchFor)
            counter++;
    }
    std::cout << (char) toupper(letterToSearchFor) << ", " << letterToSearchFor << " : " << counter << std::endl;
}

void count_chars_1(char text[]) {
    for (int htmlCode = 97; htmlCode <= 122; htmlCode++)
        count_chars_with_letter(text, (char) htmlCode);
}

void count_chars_2(char text[]) {
    int counters[26] = {};
    for (char *letter = &text[0]; *letter; letter = letter + 1) {
        int htmlCode = (int) tolower(*letter);
        if (htmlCode >= 97 || htmlCode <= 122)
            counters[htmlCode - 97] += 1;
    }
    for (int counter = 0; counter <= 25; counter++) {
        std::cout << (char) (counter + 65) << ", " << (char) (counter + 97) << " : " << counters[counter] << std::endl;
    }
}

void count_chars_with_bar_graph(char text[]) {
    int counters[26] = {0};
    // count all the letters
    for (char *letter = &text[0]; *letter; letter = letter + 1) {
        int htmlCode = (int) tolower(*letter);
        if (htmlCode >= 97 || htmlCode <= 122)
            counters[htmlCode - 97] += 1;
    }

    // find the max
    int max = 0;
    for (int counter : counters){
        if (counter > max) max = counter;
    }

    // print the bar graph
    for (int currentY = max; currentY >= 0; currentY--) {
         for (int counter = 0; counter <= 25; counter++) {
             if (currentY == 0){
                 std::cout << (char) (counter + 65);
             }
             else if (counters[counter] >= currentY)
                 std::cout << "*";
             else
                 std::cout << " ";
         }
         std::cout << "\n";
     }
}

int main() {
    char text2[] = "Today is a nice day for having a little picnic.";
    char text[] = "Zoomania is a zoo movie.";
    count_chars_1(text);
    std::cout << "\n\n";
    count_chars_2(text);
    std::cout << "\n\n";
    count_chars_with_bar_graph(text);
    return 0;
}
