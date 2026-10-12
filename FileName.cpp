#include <iostream>
#include <vector>
#include <cstdint>
#include <string>

struct Section {
	struct BYTE{
		union {
			struct { std::uint8_t _; };
			union {
				std::uint8_t UnSigned;
				std::int8_t Signed;
				std::uint8_t SA[1];
				std::int8_t USA[1];
			};
		};

		template<class T>
		BYTE operator=(const T& In) {
			BYTE B{ {In}, };
			*this = B;
			return B;
		}
	};

	std::string Title = "Sun is rise.";
	std::string Name="No Name";
	std::string Text = "The Text!";
	std::vector<BYTE> Data;
};

struct Document {
	std::string Title = "Asitaka Is where.";
	std::vector<Section> Secs;
	std::string Sep;
};

struct Book {
	std::string Title = "Sol is rise.";
	Document Mae;
	std::vector<Document> Docs;
	Document Ato;
};

struct Books {
	std::string Name="The BooKs.";
	std::vector<Book> Books;
};

int main() {
	Books A;


	A.Books.front().Docs.front().Secs.front().Name

}











}