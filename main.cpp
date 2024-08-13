/*
Задание 1. Разработка программы поиска слов в файле
Что нужно сделать
Составьте небольшой текстовый файл «words.txt», в котором последовательно, через пробелы и переносы строк расположены различные слова. Можете использовать любые англоязычные слова. Разработайте программу, которая искала бы среди этих слов нужное пользователю и выводила бы общее количество повторений этого слова. 0 — если слово вообще не присутствует в файле.

Что оценивается
Корректность работы программы на созданных вами вводных данных. Число найденных слов должно соответствовать.
Как отправить работу на проверку
Прислать ссылку на repl.it или файл .срр с решением.
*/

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    ifstream words;
    words.open("words.txt");

    string serach_word = "bbb";
    int count_serach_word = 0;
    string temp_word;

    while (!words.eof()){
        words >> temp_word;
        if (temp_word == serach_word){
            ++count_serach_word;
        }
        cout << temp_word << endl;
    }
    words.close();

    cout << count_serach_word;
}