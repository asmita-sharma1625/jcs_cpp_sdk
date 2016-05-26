#ifndef REBOOT_INSTANCER_H
#define REBOOT_INSTANCER_H
#include <string>
#include <map>
#include "src/compute_api/include/model/instance_set.h"
using namespace std;
using namespace model;

namespace model
{
	class reboot_instances_response
	{
	private:
		string request_id;
		vector<model::instance_set> instances;

	public:
		reboot_instances_response(const string &xml_doc);
		reboot_instances_response(){}

		const string get_request_id()
		{
			return request_id;
		}
		const vector<model::instance_set> get_instances()
		{
			return instances;
		}

	};
}
#endif
