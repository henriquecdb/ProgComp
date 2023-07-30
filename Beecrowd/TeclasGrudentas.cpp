#include <iostream>
#include <string>

int main() {
  std::string message;
  std::getline(std::cin, message);

  std::string corrected_message;
  char prev_char = '\0'; // Usamos '\0' para garantir que prev_char seja
                         // diferente do primeiro caractere da mensagem

  for (char current_char : message) {
    if (current_char != prev_char) {
      corrected_message += current_char;
    }
    prev_char = current_char;
  }

  std::cout << corrected_message << std::endl;

  return 0;
}
