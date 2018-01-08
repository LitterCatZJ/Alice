/*
 * CopyRight(C)  YongDeng
 *All Rights Reserved
 * 2016-
 */


/////////////////////////////////////////////////////////////////////
  #ifndef BHV_DEFENSIVEHALF_MOVE
  #define BHV_DEFENSIVEHALF_MOVE
  #include <rcsc/geom/vector_2d.h>
  #include <rcsc/player/soccer_action.h>
  #include <rcsc/player/player_object.h>
  class Bhv_DefensiveHalf_Move
	  : public rcsc::SoccerBehavior {
  private:
      const rcsc::Vector2D M_home_pos;
      bool is_marking;

  public:
      Bhv_DefensiveHalf_Move()
      { }

      bool execute( rcsc::PlayerAgent * agent );

  private:
      bool  Block_BA_DF( rcsc::PlayerAgent * agent );
      bool  Block_BA_DG(rcsc::PlayerAgent * agent );
      bool  EmergencyMove(rcsc::PlayerAgent *agent);
      bool  MarkPlan(rcsc::PlayerAgent *agent);
      bool  Mark(rcsc::PlayerAgent *agent,const rcsc::AbstractPlayerObject *mark_target);
      bool  PressMark(rcsc::PlayerAgent *agent,const rcsc::AbstractPlayerObject *mark_target);
      void  doNormalMove( rcsc::PlayerAgent * agent );

  };

  #endif // MOVE_6_H
