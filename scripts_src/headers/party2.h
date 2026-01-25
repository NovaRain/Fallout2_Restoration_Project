#ifndef PARTY2_H
#define PARTY2_H

// needs defines from define.h, so included late

procedure party_size_humans begin
   variable n := 0, type, who;
   foreach who in party_member_list_critters begin
      type := critter_kill_type(who);
      if type == KILL_TYPE_men_kills or type == KILL_TYPE_women_kills then n+=1;
   end
   return n;
end

/**
 * Returns True if anyone in party is injured, False othewise.
 * @ret {bool} injured
 */
procedure party_has_injured() begin
   foreach (variable who in party_member_list_critters) begin
      if Is_Injured(who) then return true;
   end
   return false;
end

/**
 * Returns the count of injured party members
 * @ret {int} injured_count
 */
procedure party_injured_count() begin
   variable count = 0;
   foreach (variable who in party_member_list_critters) begin
      if Is_Injured(who) then count += 1;
   end
   return count;
end

#endif // PARTY2_H
