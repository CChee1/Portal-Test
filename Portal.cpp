#include <stdio.h>
#include <string.h>

struct event {
	char eventName[24];
	int month;
	int day;
	int year;
	int timeStart;
	int timeEnd;
};

int main(void)
{
	int i = 0;
	int j = 0;
	struct event events[6];
	strcpy(events[0].eventName, "Interview at The Portal");
	events[0].month = 2;
	events[0].day = 23;
	events[0].year = 2017;
	events[0].timeStart = 1500;
	events[0].timeEnd = 1630;
	strcpy(events[1].eventName, "Lunch with Cindy");
	events[1].month = 2;
	events[1].day = 25;
	events[1].year = 2017;
	events[1].timeStart = 1200;
	events[1].timeEnd = 1300;
	strcpy(events[2].eventName, "Dinner with John");
	events[2].month = 2;
	events[2].day = 24;
	events[2].year = 2017;
	events[2].timeStart = 1700;
	events[2].timeEnd = 1730;
	strcpy(events[3].eventName, "Conference");
	events[3].month = 2;
	events[3].day = 24;
	events[3].year = 2017;
	events[3].timeStart = 1100;
	events[3].timeEnd = 1730;
	strcpy(events[4].eventName, "Lunch with Chris");
	events[4].month = 2;
	events[4].day = 25;
	events[4].year = 2017;
	events[4].timeStart = 1200;
	events[4].timeEnd = 1230;
	strcpy(events[5].eventName, "Lunch with Bob");
	events[5].month = 2;
	events[5].day = 23;
	events[5].year = 2017;
	events[5].timeStart = 1500;
	events[5].timeEnd = 1530;
	strcpy(events[6].eventName, "Dinner with Chris");
	events[6].month = 2;
	events[6].day = 26;
	events[6].year = 2017;
	events[6].timeStart = 1800;
	events[6].timeEnd = 1930;
	strcpy(events[7].eventName, "Dinner with Bob");
	events[7].month = 2;
	events[7].day = 27;
	events[7].year = 2017;
	events[7].timeStart = 1700;
	events[7].timeEnd = 1830;



	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (events[i].year == events[j].year)
			{
				if (events[i].month == events[j].month)
				{
					if (events[i].day == events[j].day)
					{
						if ((events[i].timeStart > events[j].timeStart && events[i].timeStart < events[j].timeEnd) || (events[i].timeEnd > events[j].timeStart && events[i].timeEnd < events[j].timeEnd))
						{
							printf("%s has a time conflict with %s\n", events[i].eventName, events[j].eventName);
						}
					}
				}
			}
		}
	}
}
