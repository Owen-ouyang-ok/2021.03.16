#include<windows.h>
#include<conio.h>
int main()
{
	int hX = 0, hY = 0, len = 4, map[900] = { 0 }, c = 'd', c1 = 'd', i = 0;
	srand((unsigned)malloc(!system("mode con:cols=60 lines=30")));
	for (map[rand() % 900] = -1; 1; Sleep(100)) {
		if (_kbhit() && (c1 = _getch()) && c1 < 97 ? c1 += 32 : 1)
			if (c1 == 'a'&&c != 'd' || c1 == 'd'&&c != 'a' || 
				c1 == 'w'&&c != 's' || c1 == 's'&&c != 'w')c = c1;
		if (c == 'a'&&--hX < 0 || c == 'd'&&++hX == 30 ||
			c == 'w'&&--hY < 0 || c == 's'&&++hY == 30)exit(0);
		if (map[hY * 30 + hX] && (map[hY * 30 + hX] > 0 ? exit(0), 1 : ++len))
			for (i = rand() % 900; map[i] || !(map[i] = -1); i = rand() % 900);
		else for (i = 0; i < 900; i++)map[i] > 0 ? map[i] -= 1 : 0;
		for (system("cls"), map[hY * 30 + hX] = len, i = 0; i < 900; i++)
			_cputs(map[i] > 0 ? "()" : map[i] ? "00" : "  ");

	}
}