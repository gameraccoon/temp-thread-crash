#include <thread>

int main()
{
	auto thread = std::thread([]{});

	if (thread.joinable())
	{
		thread.join();
		return 0;
	}
	else
	{
		return 1;
	}
}
