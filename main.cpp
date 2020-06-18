#include <SFML/Network.hpp>
#include <iostream>
#include <string>
#include <vector>

int main() {
  using sf::IpAddress;
  using sf::Socket;
  using sf::TcpSocket;
  using std::cin;
  using std::cout;
  using std::endl;
  using std::string;

  cout << "Please enter an IP address: ";
  string ip;
  int start;
  int end;
  cin >> ip;
  cout << "Please enter a range of ports to scan." << endl;
  cout << "First port: ";
  cin >> start;
  cout << "Last port: ";
  cin >> end;

  int port = start;
  while (port <= end) {
    if (TcpSocket().connect(ip, port) == Socket::Done) {
      cout << port << " is OPEN" << endl;
    };
    port++;
  }
  return 0;
}
