#ifndef INSTANCE_H
#define INSTANCE_H

#include <cstddef>

namespace instance {
    struct solomon {
        size_t count;
        struct customer {
            int number;
            float xcoord;
            float ycoord;
            float demand;
            float ready_time;
            float due_date;
            float service_time;
        };
        customer* customers;
    };
}

#endif
