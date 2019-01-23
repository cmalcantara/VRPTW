#ifndef INSTANCE_H
#define INSTANCE_H

#include <cstddef>

namespace instance {
    struct Solomon {
        size_t count;
        struct Node {
            int   id;
            float cx;
            float cy;
        };
        
        struct Request {
            int   id;
            float start;
            float end;
            float quantity;
            float service_time;
        };
        
        struct Vehicle { 
            int start_node;
            int end_node;
            float capacity;
            float max_time;
        };
        
        Node*    nodes;
        Request* requests;
        Vehicle* fleet;
    };
}

#endif
