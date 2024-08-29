#include <iostream>
#include "my_time_lib.h"

using namespace std;
using namespace my_time_lib;

/*
s_date	ft_decrease_date_by_one_day(s_date date_s)
{
	if (date_s.day == 1)
	{
		if (date_s.month == 1)
		{
			date_s.month = 12;
			date_s.day = ft_nbr_of_days_in_a_month(date_s);
			(date_s.year)--;
		}
		else
		{
			(date_s.month)--;
			date_s.day = ft_nbr_of_days_in_a_month(date_s);
		}
	}
	else
		(date_s.day)--;
	return (date_s);
}
*/

int	main(void)
{
	s_date  date_s;

    date_s = ft_read_date_s();
    printf("\n\nThe date before:  %hd/%hd/%hd\n\n", date_s.day, date_s.month, date_s.year);
    date_s = ft_decrease_date_by_one_day(date_s);
    printf("\nThe date after:  %hd/%hd/%hd\n\n", date_s.day, date_s.month, date_s.year);
    return (0);	
}
