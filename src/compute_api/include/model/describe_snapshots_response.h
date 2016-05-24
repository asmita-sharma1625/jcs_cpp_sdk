#include <map>
#include "src/compute_api/include/model/snapshot.h"
using namespace std;
using namespace model;

namespace model
{
	class describe_snapshots_response
	{
	private:
		string request_id;
		map<string, model::snapshot>snapshot_set;

	public:
		describe_snapshots_response(const string xml_doc);

		const string get_request_id()
		{
			return request_id;
		}
		const map<string, model::snapshot> get_snapshot_set()
		{
			return snapshot_set;
		}
	};

}