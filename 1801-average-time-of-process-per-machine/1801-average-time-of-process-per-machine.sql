select a.machine_id,
round(avg(b.timestamp-a.timestamp),3) as processing_time from Activity a, Activity b
where b.activity_type='end' and
a.activity_type='start'
and a.process_id=b.process_id
and a.machine_id=b.machine_id
 group by a.machine_id ;
