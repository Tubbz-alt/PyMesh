/* This file is part of PyMesh. Copyright (c) 2015 by Qingnan Zhou */
#pragma once
#ifdef WITH_CGAL
#ifdef WITH_CGAL_COREFINEMENT

#include <Boolean/BooleanEngine.h>

namespace PyMesh {

class CGALCorefinementEngine : public BooleanEngine {
    public:
        virtual ~CGALCorefinementEngine() {}

    public:
        virtual void compute_union();
        virtual void compute_intersection();
        virtual void compute_difference();
        virtual void compute_symmetric_difference();
};

}

#endif
#endif
