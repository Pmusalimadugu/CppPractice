
#include <iostream>
#include <thread>

#define print(x) std::cout << x << std::endl


void PrintLoop()
{
	while (true)
	{
		print("Chicken");
	}
}

int main()
{	

	std::thread worker1(PrintLoop);
	std::thread worker2(PrintLoop);
	std::thread worker3(PrintLoop);
	std::thread worker4(PrintLoop);

	worker1.join();
	worker2.join();
	worker3.join();
	worker4.join();

	std::cin.get();
}
