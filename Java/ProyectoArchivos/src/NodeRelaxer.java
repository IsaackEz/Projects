

/**
 *
 * @author MARIO & ALEX
 */
public class NodeRelaxer {
    private String summoner;
    private int kills;
    private int deaths;
    private int assists;
    private boolean victory;
    private NodeRelaxer next;
    
    public void NodeRelaxer(){
        this.kills = 0;
        this.deaths = 0;
        this.assists = 0;
        this.victory = true;
        this.next = null;
    }

    public String getSummoner() {
        return summoner;
    }

    public void setSummoner(String summoner) {
        this.summoner = summoner;
    }
    
    public int getKills() {
        return kills;
    }

    public void setKills(int kills) {
        this.kills = kills;
    }

    public NodeRelaxer getNext() {
        return next;
    }

    public void setNext(NodeRelaxer next) {
        this.next = next;
    }

    public int getDeaths() {
        return deaths;
    }

    public void setDeaths(int deaths) {
        this.deaths = deaths;
    }

    public int getAssists() {
        return assists;
    }

    public void setAssists(int assists) {
        this.assists = assists;
    }

    public boolean isVictory() {
        return victory;
    }

    public void setVictory(boolean victory) {
        this.victory = victory;
    }
    
    
    
}
