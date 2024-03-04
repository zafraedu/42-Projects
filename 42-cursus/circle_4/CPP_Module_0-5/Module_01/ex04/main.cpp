#include <iostream>
#include <fstream>

int msg_err(const std::string &error_msg)
{
	std::cerr << "error: " << error_msg << '\n';
	return 1;
}

// ./replace <filename> <toFind> <replace>
int main(int argc, char **argv)
{
	if (argc != 4)
		return msg_err("Usage: ./replace <filename> <to_find> <replace>.");

	std::ifstream in_file(argv[1], std::ifstream::in);

	std::ofstream new_file;
	std::string new_file_name(argv[1]);
	new_file_name.append(".replace");

	std::string toFind(argv[2]);
	std::string replace(argv[3]);
	std::string file_content;

	if (!in_file.is_open())
		return msg_err("Unable to open the file.");

	std::getline(in_file, file_content, '\0'); // get infile content until \0 (EOF)

	new_file.open(new_file_name.c_str());

	int pos;
	while ((pos = file_content.find(toFind)) != -1) // while toFind is still on the file
	{
		file_content.erase(pos, toFind.length());
		file_content.insert(pos, replace);
	}
	new_file << file_content;

	in_file.close();
	new_file.close();
	return 0;
}
