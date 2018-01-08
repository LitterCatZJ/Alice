/*
 * CopyRight(C)  YongDeng
 *All Rights Reserved
 * 2016-
 */

/////////////////////////////////////////////////////////////////////

#ifndef BRAIN_H
#define BRAIN_H

#include "field_evaluator.h"
#include "predict_state.h"

#include <vector>

namespace rcsc {
class AbstractPlayerObject;
class Vector2D;
}

class ActionStatePair;

class Brain
    : public FieldEvaluator {
private:

public:
    Brain()=default;
    virtual
    ~Brain()
    {}

    virtual
    double operator()( const PredictState & state,
                       const std::vector< ActionStatePair > & path );
    static const  Brain  & Instance();
    bool   read(std::string  &data_dir);
private:
    double evaluate_state( const PredictState & state );

    bool  is_bed_pass( const ActionStatePair  path );

    double decesion_tree( const ActionStatePair  path );
    double less36_decesion_tree( const ActionStatePair  path );
    double over36_decesion_tree( const ActionStatePair  path );
//    double evaluate_dribble( const PredictState & state,const ActionStatePair path );
//    double evaluate_pass( const PredictState & state,const ActionStatePair path );
//    double evaluate_hold( const PredictState & state,const ActionStatePair path );
//    double evaluate_shoot( const PredictState & state,const ActionStatePair path );


};

#endif
