
#include <iostream>
#include <thread>

#define print(x) std::cout << x << std::endl


class Entity
{
	public:
		Entity()
		{
			m_x = 0.0f;
			m_y = 0.0f;
		}

		Entity(float m_x, float m_y)
		{
			Entity::m_x = m_x;
			Entity::m_y = m_y;
		}

		~Entity()
		{
			print("destroyed entity");
		}

		float getX()
		{
			return m_x;
		}

		float getY()
		{
			return m_y;
		}
	private:
		float m_x;
		float m_y;

};

class Player : public Entity
{
	public:
		Player(const char* name)
		{
			m_name = name;
		}

		const char* getName()
		{
			return m_name;
		}
	private:
		const char* m_name;
};

int main()
{	
	Entity e = Entity(10, 20);
	print(e.getX());
	int* b = (int*)100000;


	Player pranay = Player("Pranay Stack");
	Player* pranayh = new Player("Pranay Heap");


	print(sizeof(int));

	print(pranay.getName());
	print(pranayh->getName());
	delete pranayh;
	
	

}
