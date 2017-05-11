public class ObstacleScript : ArrowTargetScript
{
    protected override void InteractWithArrow(ArrowScript arrow, bool isTrigger)
    {
        arrow.Stop();        
    }
}
