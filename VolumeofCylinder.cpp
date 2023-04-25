float CylinderVolume(int radius,int height)
{
    float volume;
    
    //float pi = 3.14;
    //from the internet I've gathered V=Bh or V=πr^2h, and because we're using pi here, oh wait there's no math func?
    //first run
    //okay pi isn't defined
    //second run didn't go smoothly
    //found out, it's pi(r(sq2))h, not pir(2h)
    //nth run, you don't need to define pi 
    volume=3.14*radius*radius*height;//Write expression here
    
    return volume;
}
