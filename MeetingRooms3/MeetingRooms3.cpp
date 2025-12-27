#include <iostream>
#include "MeetingRoom.h"

int main()
{
	int n = 2;
	vector<vector<int>> meetings = { {0,10},{1,5},{2,7},{3,4} };
	int ans = mostBooked(n, meetings);

	std::cout << ans << std::endl;
}
