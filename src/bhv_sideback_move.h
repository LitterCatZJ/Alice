/*
 * CopyRight(C)  YongDeng
 *All Rights Reserved
 * 2016-
 */


/////////////////////////////////////////////////////////////////////

#ifndef BHV_SIDEBACK_MOVE_H
#define BHV_SIDEBACK_MOVE_H
#include <rcsc/geom/vector_2d.h>
#include <rcsc/player/soccer_action.h>
#include <rcsc/player/player_object.h>
class Bhv_SideBack_Move:
        public  rcsc::SoccerBehavior
{
    const rcsc::Vector2D M_home_pos;

    static bool is_marking ;

public:
    Bhv_SideBack_Move()
    {  }

    bool execute( rcsc::PlayerAgent * agent );

private:

    bool  isGolieHelperSituation(rcsc::PlayerAgent *agent);
    bool  EmergencyMove(rcsc::PlayerAgent *agent);
    
    void doNormalMove( rcsc::PlayerAgent * agent );
    bool   MarkPlan(rcsc::PlayerAgent *agent);
    bool  PressMark(rcsc::PlayerAgent *agent,const rcsc::AbstractPlayerObject *mark_target);
    bool   Mark(rcsc::PlayerAgent *agent,const rcsc::AbstractPlayerObject *mark_target);
    bool Block_BA_CB(rcsc::PlayerAgent *agent);
    bool Block_BA_DF( rcsc::PlayerAgent * agent );
    bool DefensiveMark( rcsc::PlayerAgent * agent);




};

#endif // MOVE_4_H
