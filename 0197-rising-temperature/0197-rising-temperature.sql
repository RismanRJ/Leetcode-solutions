# Write your MySQL query statement below
select W1.id from Weather W1 join Weather W2 on
W1.recordDate= DATE_ADD(W2.recordDate, interval 1 day)
where W2.temperature<W1.temperature;