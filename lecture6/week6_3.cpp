

#include <iostream>

void count_chars_with_letter(char text[], char letterToSearchFor) {
    int counter = 0;
    for (char *letter = &text[0]; *letter; letter = letter + 1) {
        if (tolower(*letter) == letterToSearchFor)
            counter++;
    }
    std::cout << (char) toupper(letterToSearchFor) << ", " << letterToSearchFor << " : " << counter << std::endl;
}

void count_chars(char text[]) {
    for (int htmlCode = 97; htmlCode <= 122; htmlCode++)
        count_chars_with_letter(text, (char) htmlCode);
}

void count_chars_other_solution(char text[]) {
    int counters[26] = {};
    for (char *letter = &text[0]; *letter; letter = letter + 1) {
        int htmlCode = (int) *letter;
        if (htmlCode >= 97 || htmlCode <= 122)
            counters[htmlCode - 97] += 1;
    }
    for (int counter = 0; counter <= 25; counter++) {
        std::cout << (char) (counter + 65) << ", " << (char) (counter + 97) << " : " << counters[counter] << std::endl;
    }
}

void count_chars_with_bar_graph(char text[]) {
    int counters[26] = {0};
    std::string sentence = text;

    for (char& letterInText : sentence) {
        int letterAsNr = (int) tolower(letterInText) - 97;
        if (letterAsNr >= 0 || letterAsNr <= 25) {
            counters[letterAsNr] += 1;
        }
    }

    int max = 0;
    for (int counter : counters){
        if (counter > max) max = counter;
    }

    for (int currentBarHeight = max; currentBarHeight >= 0; currentBarHeight--) {
         for (int counter = 0; counter <= 25; counter++) {
             if (currentBarHeight == 0){
                 std::cout << (char) (counter + 65);
             }
             else if (counters[counter] >= currentBarHeight)
                 std::cout << "*";
             else
                 std::cout << " ";
         }
         std::cout << "\n";
     }
}

int main() {
    char text[] = "Today is a nice day for having a little picnic.";
    char text2[] = "Zoomania is a zoo movie.";
    //count_chars(text);
    std::cout << "\n\n";
    //count_chars_other_solution(text);
    std::cout << "\n\n";
    count_chars_with_bar_graph(text);
    return 0;
}
