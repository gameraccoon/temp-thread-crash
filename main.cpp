#include <thread>
#include <iostream>

int main()
{
	std::cout << "started\n" << std::flush;
	auto thread = std::thread([]{});

	if (thread.joinable())
	{
		thread.join();
		std::cout << "joined\n" << std::flush;
	}
	else
	{
		std::cout << "not joinable\n" << std::flush;
	}
}
