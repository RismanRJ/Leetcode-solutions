select EmployeeUNI.unique_id,Employees.name as name from Employees
left join EmployeeUNI on Employees.id=EmployeeUNI.id;