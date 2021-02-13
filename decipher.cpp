#include <iostream>

using namespace std;

string CaesarDecipher(string cipher_text, int shift){
  string deciphered_text = "";
    
  for(int i = 0; i < cipher_text.size(); i++){
    char ascii = cipher_text[i];
    if(ascii >= 65 && ascii <= 90){
      deciphered_text += char((cipher_text[i] - shift - 65) % 26 + 65);
    }else if(ascii >= 97 && ascii <= 122){
      deciphered_text += char((cipher_text[i] - shift - 97) % 26 + 97);
    }else{
      deciphered_text += cipher_text[i];
    }
  }
  
  return deciphered_text;
}

int main(){
  string cipher_text;
  cin >> cipher_text;
  cout << CaesarDecipher(cipher_text, 3) << endl;
}
