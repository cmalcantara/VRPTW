#include "instance.h"

using instance::Solomon;

Solomon(size_t customer_count, size_t fleet_count) : nodes(new Solomon::Node[customer_count]),
        requests(new Solomon::Request[customer_count]), fleet(new Solomon::Vehicle[fleet_count]) {}
