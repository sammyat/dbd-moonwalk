#include <iostream>
#include <windows.h>

//main function
int main()
{
	const wchar_t* consoleTitle = L"DBD Moonwalk";
	SetConsoleTitleW(consoleTitle);
	//keyboard key
	std::cout << "discord.gg/cazz | made by Natx#2929" << std::endl;
	std::cout << "Enter the key you would like to use for moonwalking: ";
	char key;
	std::cin >> key;
	std::cout << "The current key is " << key << std::endl;
	SHORT virtualkey = VkKeyScan(key);

	//moonwalk loop
	while (true)
	{
		//if selected button was pressed
		if (GetAsyncKeyState(virtualkey))
		{
			//0x41 = a  |  0x44 = d
			keybd_event(0x41, 0, 0x0001, 0);
			Sleep(130);
			keybd_event(0x41, 0, 0x0002, 0);
			Sleep(1);
			keybd_event(0x44, 0, 0x0001, 0);
			Sleep(130);
			keybd_event(0x44, 0, 0x0002, 0);
		}
	}
	return 0;
}
