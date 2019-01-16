#include "instance.h"

instance::solomon::customer(int n, float x, float y, float qty, float rtime, float ddate, float stime)
		: number(n), xcoord(x), ycoord(y), demand(qty), ready_time(rtime), due_date(ddate), service_time(stime) {}
		
instance::solomon::customer() : instance::solomon::customer(1, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00) {}
