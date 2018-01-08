/*
 * CopyRight(C)  YongDeng
 *All Rights Reserved
 * 2016-
 */

/////////////////////////////////////////////////////////////////////


  #ifndef BHV_CENTERBACK_MOVE_H
  #define BHV_CENTERBACK_MOVE_H
  #include <rcsc/geom/vector_2d.h>
  #include <rcsc/player/soccer_action.h>
  #include <rcsc/player/player_object.h>




  class Bhv_CenterBack_Move :
	  public  rcsc::SoccerBehavior
  {
      const rcsc::Vector2D M_home_pos;
      bool  is_marking;
  public:
      Bhv_CenterBack_Move()
      { is_marking=false ;}

      bool execute( rcsc::PlayerAgent * agent );

  public:
//      static  bool is_time_avoide_marking;
//      static  int  avoide_mark_cycle;
  private:

      bool  isGolieHelperSituation(rcsc::PlayerAgent *agent);
      bool  EmergencyMove(rcsc::PlayerAgent *agent);
      bool  MarkPlan(rcsc::PlayerAgent *agent);
      bool  Mark(rcsc::PlayerAgent *agent,const rcsc::AbstractPlayerObject *mark_target);
      
      void doNormalMove( rcsc::PlayerAgent * agent );
      bool goalie_help(rcsc::PlayerAgent *agent);
      bool Block_BA_DF( rcsc::PlayerAgent * agent );
      bool Block_BA_DG( rcsc::PlayerAgent * agent );
      bool DefensiveMark( rcsc::PlayerAgent * agent );


  };



  #endif // MOVE_2_H
