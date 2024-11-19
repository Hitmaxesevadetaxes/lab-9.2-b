#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

#define begin {
#define end }

using namespace std;

void countFrequencies(const int numbers[], int size)
begin
map<int, int> frequency;


for (int i = 0; i < size; i++)
    begin
    frequency[numbers[i]]++;
end


cout << "Frequency of each number:" << endl;
for (const auto& pair : frequency)
begin
cout << "Number " << pair.first << " appears " << pair.second << " times." << endl;
end
end

int findCharacterByCode(const char characters[], int size, char code)
begin
for (int i = 0; i < size; i++)
    begin
    if (characters[i] == code)
        begin
        cout << "Character '" << code << "' found at position " << i << "." << endl;
return i; 
end
end
cout << "Character with code '" << code << "' not found." << endl;
return -1; 
end

int main()
begin
int data[] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4 };
int dataSize = sizeof(data) / sizeof(data[0]);


char dataChar[] = { 'a', 'b', 'c', 'd', 'e' };
int dataCharSize = sizeof(dataChar) / sizeof(dataChar[0]);

countFrequencies(data, dataSize);


findCharacterByCode(dataChar, dataCharSize, 'c');

return 0;
end
