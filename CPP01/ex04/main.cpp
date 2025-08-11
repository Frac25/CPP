#include<iostream>
#include<fstream>
#include<string>

std::string replace_line(std::string line, const std::string &s1, const std::string &s2)
{
	size_t pos = line.find(s1);

	if(s1.empty())
		return(line);
	while(pos != std::string::npos)
	{
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos += s2.length();
		pos = line.find(s1, pos);
	}
	return(line);
}

int main(int argc, char** argv)
{
	if(argc != 4)
	{
		std::cerr << " entrez : filename s1 s2" << std::endl;
		return(1);
	}
//recup de input
	std::string filename_in = argv[1];
	std::ifstream input_file(filename_in.c_str());
	if(!input_file.is_open())
	{
		std::cout << " input_file error " << std::endl;
		return(1);
	}

//creation de output
	std::string filename_out = filename_in + ".replace";
	std::ofstream output_file(filename_out.c_str());
	if(!output_file.is_open())
	{
		std::cout << " output_file error " << std::endl;
		return(1);
	}
//remplacement
	std::string line;
	while(std::getline(input_file, line))
	{
		output_file << replace_line(line, argv[2], argv[3]) << std::endl;
	}

	return(0);
}
