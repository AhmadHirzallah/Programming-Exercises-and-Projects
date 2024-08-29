#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

short	ft_count_tokens(string &sentence) 
{
    short	count = 0;
    short	in_word = 0;
	short	c;

	c = -1;
    while (++c < sentence.length()) 
	{
        if ((sentence[c] >= 9 && sentence[c] <= 13)
				|| sentence[c] == 32) 
            in_word = 0;
		else if (!in_word)
		{
            in_word = 1;
            count++;
        }
    }
    return (count);
}

void	ft_print_tokens_count_result(string &entered_str)
{
	printf("The count of (tokens)/words in the string (%s) is: (%hd)\n", entered_str.c_str(), ft_count_tokens(entered_str));
}

string	ft_read_string(string message)
{
	string	entered_str;
	
	printf("%s", message.c_str());
	getline(cin >> ws, entered_str);
	return (entered_str);
}

vector<string> ft_v_words_spliting_getting_tokens(string &entered_str)
{
	vector<string> words;
	size_t	word_start_index;
	bool	is_word;
	short	c;
	short	word_len;

	word_start_index = 0;
	word_len = 0;
	is_word = false;
	c = -1;
	while(++c < entered_str.length())
	{
		if (isspace(entered_str[c]) && is_word)
		{
				word_len = c - word_start_index;
				words.emplace_back(entered_str.substr(word_start_index, word_len));
				is_word = false;
		}
		else if (!is_word)
		{
			word_start_index = c;
			is_word = true;
		}
	}
	if (is_word)
	{
		word_len = entered_str.length() - word_start_index;
		words.emplace_back(entered_str.substr(word_start_index, word_len));
	}
	return (words);
}

void	ft_print_vector_tokens(vector<string>  &words)
{
	printf("Tokens are:\n");
	for (string &word : words)
		printf("%s\n", word.c_str());
}

int	main(int ac, char **av)
{
	vector<string>	words;
	string	entered_str;
	short	tokens_count;
	short	c;

	tokens_count = 0;
	entered_str = "";
	c = 0;
	while (++c < ac)
	{
		if (c > 1)
			entered_str += " ";
		entered_str += av[c];
	}
	words = ft_v_words_spliting_getting_tokens(entered_str);
/*	ft_print_tokens_count_result(entered_str);  */
	printf("The count of (tokens)/words in the string (%s) is: (%ld)\n", entered_str.c_str(), words.size());
	ft_print_vector_tokens(words);
	return (0);
}

