for i in $(seq 60);
do
    ps aux|grep -o python|wc -l
    sleep 10s
done