#include <string>
using namespace std;

namespace model
{
	class instance_set
	{
	private:
		string instance_id;
		string current_state;
		string previous_state;
	public:
		instance_set(string instance_id, string current_state, string previous_state);
		const string get_instance_id()
		{
			return instance_id;
		}

		const string get_current_state()
		{
			return current_state;
		}

		const string get_previous_state()
		{
			return previous_state;
		}
	};
}