# Write your MySQL query statement below
select results from(select u.name as results from 
Users u 
join MovieRating m
on 
u.user_id=m.user_id
group by u.user_id,u.name
order by count(*)DESC,u.name
Limit 1
)a
UNION ALL
select results from(
Select m.title as results from Movies m
join MovieRating r
on r.movie_id=m.movie_id
where r.created_at BETWEEN '2020-02-01' AND '2020-02-29'
group by r.movie_id,m.title
order by AVG(r.rating) DESC,m.title
LIMIT 1
)b
