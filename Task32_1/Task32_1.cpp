#include <iostream>
#include<string>
#include<fstream>
#include"nlohmann/json.hpp"

int main()
{
	nlohmann::json film=
	{
		{"movie","The_Terminator"},
		{"country","USA"},
		{"year",1984},
		{"film_company","Hemdale_Film"},
		{"screenwriter","James Cameron"},
		{"director","James Cameron"},
		{"producer","Gail Ann Hurd"},
		{"Terminator","Arnold Schwarzenegger"},
		{"Sarah Connor","Linda Hamilton"},
		{"Kyle Reese","Michael Bean"}
	};
	std::ofstream file("drom.json");
	file << film;

	return 0;
}
