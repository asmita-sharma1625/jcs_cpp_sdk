#include <string>
#include <map>
#include "src/compute_api/include/model/instance_set.h"
using namespace std;
using namespace model;

namespace model
{
	class stop_instances_response
	{
	private:
		string request_id;
		map<string, model::instance_set> instances;

	public:
		stop_instances_response(const string xml_doc);

		const string get_request_id()
		{
			return request_id;
		}
		const map<string,model::instance_set> get_instances()
		{
			return instances;
		}

	};

}